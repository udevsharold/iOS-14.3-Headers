/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate;


@protocol PLAssetContainer <NSObject,PLDiagnosticsProvider>
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@optional
-(NSDate *)endDate;
-(NSDate *)startDate;

@required
-(NSString *)localizedTitle;
-(unsigned long long)photosCount;
-(BOOL)isEmpty;
-(void)setKeyAsset:(id)arg1;
-(unsigned long long)videosCount;
-(BOOL)canShowComments;
-(unsigned long long)assetsCount;
-(NSOrderedSet *)assets;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1;
-(NSArray *)localizedLocationNames;
-(NSString *)uuid;
-(BOOL)canShowAvalancheStacks;
-(unsigned long long)approximateCount;
-(PLManagedAsset *)keyAsset;
-(NSString *)title;

@end
