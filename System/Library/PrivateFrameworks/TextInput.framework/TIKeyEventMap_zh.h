/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIKeyEventMap.h>

@interface TIKeyEventMap_zh : TIKeyEventMap
+(BOOL)supportsSecureCoding;
+(id)punctuationMap_zh_Hans;
+(id)punctuationMap_zh_Hant;
+(id)sharedInstance;
-(id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4 ;
-(id)punctuationMap;
-(BOOL)isURLOrEmailKeyboardInKeyboardState:(id)arg1 ;
@end

