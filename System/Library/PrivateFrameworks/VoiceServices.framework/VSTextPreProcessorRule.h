/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class NSString;

@interface VSTextPreProcessorRule : NSObject {

	NSString* _matchPattern;
	NSString* _replacement;
	BOOL _caseSensitive;
	BOOL _eatPunctuation;

}
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)dealloc;
-(id)matchedString:(id)arg1 forTokenInRange:(SCD_Struct_VS12*)arg2 ;
@end

