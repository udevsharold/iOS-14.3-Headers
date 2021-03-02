/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIAssetManaging <NSObject>
@property (nonatomic,copy) id enabledInputModeIdentifiersProviderBlock; 
@required
-(id)enabledInputModes;
-(void)requestAssetDownloadForLanguage:(id)arg1 completion:(/*^block*/id)arg2;
-(id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2;
-(void)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id)topActiveRegions;
-(id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)setEnabledInputModeIdentifiersProviderBlock:(/*^block*/id)arg1;
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(/*^block*/id)arg5;
-(id)enabledInputModeIdentifiersProviderBlock;

@end
