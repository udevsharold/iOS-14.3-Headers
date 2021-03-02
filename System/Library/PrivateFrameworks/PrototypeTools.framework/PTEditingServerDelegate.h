/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PTEditingServerDelegate <NSObject>
@required
-(void)applyArchiveValue:(id)arg1 forRootSettingsKeyPath:(id)arg2 domainID:(id)arg3;
-(void)restoreDefaultValuesForDomainID:(id)arg1;
-(void)invokeOutletAtKeyPath:(id)arg1 domainID:(id)arg2;
-(void)sendEvent:(long long)arg1 forTestRecipeID:(id)arg2;
-(void)setActiveTestRecipeID:(id)arg1;

@end
