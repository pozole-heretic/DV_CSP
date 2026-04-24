from flask import Flask, redirect, url_for, render_template

app = Flask(__name__)
admin = True

@app.route("/")
def home():
    return render_template("index.html", title="Home", content="This is the homepage!")

@app.route("/test")
def testing():
    return render_template("index.html", title="Test", content="This is just checking to see if it works!")

@app.route("/admin")
def administrator():
    if admin:
        return "You are an admin!"
    else:
        return redirect(url_for("home"))

@app.route("/<name>")

def person(name):
    return f"<h1>Hello {name}!</h1>"

app.run()