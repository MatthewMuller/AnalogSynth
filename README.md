# Analog Synthesizer

This repository is a collection of documents and code representing the analog synthesizer created by Matthew Muller for the Normandale Community College Student Showcase.

## How Does This Synthesizer Work?

This synthesizer is a "hack" of a normal keyboard that has been converted to work with an arduino. 

##### Normal Keyboard

Keyboards today typically use timing and a cpu to detect which key has been pressed. This is done by having each key be assigned a diode. When the key is pressed, the diodes timing lets the CPU know that particular key has been hit. This synthesizer works a little bit differently.

##### This Analog Keyboard

The way this keyboard works is each key acts as a switch in a circuit. The keys are all hooked up in parallel and are open when not pressed. When a key is struct, the circuit completes and voltage passes through the switch. Each key has a different resistance, so the voltage being received at the end of the circuit is different based upon which key is pressed. This voltage can then be read by the arduino. The arudino takes this voltage reading and plays a note based upon what note has been mapped to that voltage.

## How Was The Keyboard "Hacked"?

The way this keyboard was put together was by taking an existing keyboard and modifying it. The keyboard used had an individual circuit for each key that was fed into an integrated circuit chip. The picture below shows the underside of the keyboard. You can see how the keys press into a circuit board, completing a circuit every time a key is pressed.

![This is the underside of the keyboard before it was disassembled](Pictures/KeyboardUnderside.png)


I began by short circuiting each key together, so electricity could travel into the keyboard through one connection and exit through another. I first had to remove the circuit board from the keys. I could then short the leads of each key together. This turned the keyboard from each key being its own connection into a keyboard where each key was connected in a single, parallel circuit. Below is a picture of the leads shorted together. 

![The board shorted out to have 1 input and 1 output](Pictures/ShortingLeadsOnBoard.png)

After shorting the leads on the board together, I had to short the ribbon cable together. Also, the previous ribbon cable had a cap on it that fit into another board containing the previous keyboards main CPU. To short the cable, I cut off the ribbon cable cap, pulled apart the individual ribbons, and soldered them together. 

**Note:** If you are doing this with a ribbon cable, make sure you understand where each ribbon of a ribbon cable leads to on the circuit board. For my cable, every other ribbon carried current down and then up. I had to thread every other ribbon together in order to have my circuit be parallel. 

Below I have put two pictures of the cable. The first one (Below) shows the cable with the old connector cut off and the ribbons threaded together. 

![Ribbon cable after modification](Pictures/CableConversion.png)

The second picture (Below) shows these ribbon cables twisted together and turned into a single cable. This was done by stripping back the wire on the ends of each ribbon cable and twisting them together with another wire that has been stripped back. I then applied solder to hold the twisted wires together and finished with some heat shrink over the top. The picture above shows the heat shrink.

![Another view of the ribbon cable after modification](Pictures/CableConversion2.png)

Next, I clipped and desoldered all the diodes from the circuit board. Then, starting with a resistance of 1k ohms, I soldered in resistors in place of where the diodes were. The picture below shows the board after I clipped out the diodes and began installing the resistors.

![Shows the circuit board after the diodes have been removed and durring the process of installing the resistors](Pictures/BoardWithResistors.png)

After installing the resistors, I reassembled the keyboard and was ready to connect it up to the ardunio.

## Resistance Mapping

The diagrams below show the resistance values for each key and the mapping of each key to the voltage reading of each key.


![Diagram showing the voltage values for each resistors](Pictures/ResistorVoltageValues.jpg)

![Diagram showing the voltage values for each resistors](Pictures/KeyResistanceDiagram.jpg)

















