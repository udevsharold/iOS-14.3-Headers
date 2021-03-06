/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface STKUSSDFilter : NSObject {

	NSArray* _alwaysFilteredPatterns;
	NSArray* _sometimesFilteredPatterns;
	double _lastWarningTime;

}

@property (nonatomic,copy,readonly) NSArray * alwaysFilteredPatterns;                 //@synthesize alwaysFilteredPatterns=_alwaysFilteredPatterns - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sometimesFilteredPatterns;              //@synthesize sometimesFilteredPatterns=_sometimesFilteredPatterns - In the implementation block
@property (assign,nonatomic) double lastWarningTime;                                  //@synthesize lastWarningTime=_lastWarningTime - In the implementation block
+(id)cachedExpressions;
-(void)setLastWarningTime:(double)arg1 ;
-(void)reset;
-(NSArray *)sometimesFilteredPatterns;
-(id)_matchesInString:(id)arg1 forPattern:(id)arg2 ;
-(double)lastWarningTime;
-(NSArray *)alwaysFilteredPatterns;
-(BOOL)shouldFilterString:(id)arg1 coalescable:(BOOL*)arg2 ;
-(id)initWithAlwaysFilteredPatterns:(id)arg1 sometimesFilteredPatterns:(id)arg2 ;
@end

