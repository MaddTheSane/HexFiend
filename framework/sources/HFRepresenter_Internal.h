#import <HexFiend/HFRepresenter.h>

@interface HFRepresenter (HFInternalStuff)

@property (readwrite, weak, nullable, setter=_setController:) HFController *controller;

@end
