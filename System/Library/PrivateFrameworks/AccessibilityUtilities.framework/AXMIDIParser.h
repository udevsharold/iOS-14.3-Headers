/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXMIDIParser : NSObject
-(unsigned short)_channelForStatusByte:(unsigned char)arg1 ;
-(long long)_eventTypeForStatusByte:(unsigned char)arg1 ;
-(id)parse:(const MIDIPacketList*)arg1 error:(id*)arg2 ;
-(unsigned long long)_expectedPacketLengthForEventType:(long long)arg1 ;
@end
