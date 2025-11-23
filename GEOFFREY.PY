class Neighbor:
    def __init__(self, name, age, height, skin_color, personality, hobby, education):
        self.name = name
        self.age = age
        self.height = height
        self.skin_color = skin_color
        self.personality = personality
        self.hobby = hobby
        self.education = education

    def describe(self):
        print(f"---  My Neighbour's Details: {self.name} ---")
        print(f"Name: {self.name}")
        print(f"Age: {self.age} years old")
        print(f"Height: {self.height}")
        print(f"Skin Color: {self.skin_color}")
        print(f"Personality: He is very {self.personality}.")
        print(f"Hobby: His main hobby is {self.hobby}.")
        print(f"Educational Level: He has a {self.education} degree.")
        print("-" * (len(self.name) + 26))
my_neighbor = Neighbor(
       name="Einstein",
       age=24,
       height="6FT",
       skin_color="lightskin",
       personality="humble",
       hobby="pool",
       education="Bachelor's Degree"
)
my_neighbor.describe()