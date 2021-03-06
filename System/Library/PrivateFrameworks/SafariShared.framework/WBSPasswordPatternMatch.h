/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString, NSDictionary;

@interface WBSPasswordPatternMatch : NSObject {

	unsigned long long _type;
	NSString* _matchedSubstring;
	double _guessesRequired;
	NSDictionary* _userInfo;
	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchedSubstring;              //@synthesize matchedSubstring=_matchedSubstring - In the implementation block
@property (nonatomic,readonly) NSRange range;                                 //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) unsigned long long endIndex; 
@property (nonatomic,readonly) double guessesRequired;                        //@synthesize guessesRequired=_guessesRequired - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
-(NSRange)range;
-(NSDictionary *)userInfo;
-(double)guessesRequired;
-(unsigned long long)hash;
-(unsigned long long)endIndex;
-(id)initWithType:(unsigned long long)arg1 matchedSubstring:(id)arg2 range:(NSRange)arg3 guessesRequired:(double)arg4 userInfo:(id)arg5 ;
-(id)initExhaustiveSearchPatternWithMatchedSubstring:(id)arg1 range:(NSRange)arg2 ;
-(id)description;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)matchedSubstring;
-(id)compactDescriptionWithMatchedStringColumnWidth:(unsigned long long)arg1 ;
@end

