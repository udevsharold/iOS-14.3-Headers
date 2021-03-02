/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WFContextualAction : NSObject {

	BOOL _alternate;
	NSString* _identifier;
	NSString* _displayString;
	NSArray* _matchingTypes;

}

@property (nonatomic,readonly) unsigned long long systemActionType; 
@property (nonatomic,readonly) NSArray * matchingTypes;                          //@synthesize matchingTypes=_matchingTypes - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (getter=isAlternate,nonatomic,readonly) BOOL alternate;                //@synthesize alternate=_alternate - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayString;                    //@synthesize displayString=_displayString - In the implementation block
+(id)systemActionWithType:(unsigned long long)arg1 identifier:(id)arg2 displayString:(id)arg3 inputTypes:(id)arg4 ;
-(NSString *)displayString;
-(NSString *)identifier;
-(BOOL)isAlternate;
-(NSArray *)matchingTypes;
-(id)initWithIdentifier:(id)arg1 matchingTypes:(id)arg2 displayString:(id)arg3 alternate:(BOOL)arg4 ;
-(unsigned long long)systemActionType;
@end
