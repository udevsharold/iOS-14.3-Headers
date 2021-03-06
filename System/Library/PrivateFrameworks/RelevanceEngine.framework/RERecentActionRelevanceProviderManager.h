/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSMutableDictionary, NSDate;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager {

	NSMutableDictionary* _relevanceProviderMap;
	NSDate* _lastDateUpdate;

}
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_supportsHistoricProviders;
-(void)pause;
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)_handleSignificantTimeChange;
-(void)resume;
-(void)_prepareForUpdate;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(void)_removeProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(void)_handleActionPerformedNotifiction:(id)arg1 ;
-(void)_scheduleUpdatesForActionProvider:(id)arg1 ;
@end

