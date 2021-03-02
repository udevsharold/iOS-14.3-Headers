/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESharedLocationRelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>

@class NSString;

@interface RELocationRelevanceProviderManager : RESharedLocationRelevanceProviderManager <REPredictorObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(id)_dependencyClasses;
-(void)pause;
-(void)resume;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(int)_queryRevokableStatusForProvider:(id)arg1 ;
-(id)_locationOfProvider:(id)arg1 ;
@end
