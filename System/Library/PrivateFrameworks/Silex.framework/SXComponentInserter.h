/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXComponentInserter <NSObject>
@property (nonatomic,readonly) id<SXComponentInsertionConditionEngine> conditionEngine; 
@property (nonatomic,readonly) unsigned long long componentTraits; 
@optional
-(id)cacheValidatorForCache:(id)arg1 DOMObjectProvider:(id)arg2;
-(void)componentInsertionCompleted;

@required
-(id)conditionsForDOMObjectProvider:(id)arg1;
-(unsigned long long)componentTraits;
-(id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
-(id<SXComponentInsertionConditionEngine>)conditionEngine;
-(BOOL)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;

@end

