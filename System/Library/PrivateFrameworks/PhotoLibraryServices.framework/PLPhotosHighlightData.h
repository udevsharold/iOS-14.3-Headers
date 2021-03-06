/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSSet, NSArray;


@protocol PLPhotosHighlightData <PLMomentRefreshable,PLHighlightItem>
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * localStartDate; 
@property (nonatomic,retain,readonly) NSDate * localEndDate; 
@property (assign,nonatomic) int startTimeZoneOffset; 
@property (assign,nonatomic) int endTimeZoneOffset; 
@property (assign,nonatomic) BOOL isCurated; 
@property (assign,nonatomic) double promotionScore; 
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) unsigned short kind; 
@property (assign,nonatomic) unsigned short category; 
@property (assign,nonatomic) unsigned short visibilityState; 
@property (assign,nonatomic) unsigned short enrichmentState; 
@property (nonatomic,retain) id<PLPhotosHighlightData> parentPhotosHighlight; 
@property (nonatomic,retain) id<PLPhotosHighlightData> parentDayGroupPhotosHighlight; 
@property (nonatomic,retain) NSSet * childPhotosHighlights; 
@property (nonatomic,retain) NSSet * childDayGroupPhotosHighlights; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (nonatomic,retain) NSSet * moments; 
@property (nonatomic,retain,readonly) NSArray * momentsSortedByTime; 
@property (nonatomic,retain) id<PLMomentAssetData> keyAssetForKind; 
@property (nonatomic,retain) id<PLMomentAssetData> monthFirstAsset; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain) NSSet * summaryAssets; 
@property (nonatomic,retain) NSSet * extendedAssets; 
@property (nonatomic,retain) NSSet * dayGroupAssets; 
@property (nonatomic,retain) NSSet * dayGroupExtendedAssets; 
@property (nonatomic,retain) NSSet * dayGroupSummaryAssets; 
@required
+(id)sortByTimeSortDescriptors;
-(void)delete;
-(void)setUuid:(id)arg1;
-(NSDate *)endDate;
-(NSDate *)localEndDate;
-(BOOL)isDeleted;
-(unsigned short)category;
-(NSString *)subtitle;
-(NSDate *)localStartDate;
-(BOOL)isCurated;
-(void)setType:(unsigned short)arg1;
-(NSSet *)moments;
-(NSSet *)assets;
-(void)removeAssetData:(id)arg1;
-(void)setIsCurated:(BOOL)arg1;
-(NSArray *)momentsSortedByTime;
-(unsigned short)visibilityState;
-(void)setCategory:(unsigned short)arg1;
-(void)setAssets:(id)arg1;
-(NSString *)uuid;
-(void)setSubtitle:(id)arg1;
-(void)setVisibilityState:(unsigned short)arg1;
-(unsigned short)type;
-(NSDate *)startDate;
-(void)setMoments:(id)arg1;
-(void)bumpHighlightVersion;
-(void)setStartTimeZoneOffset:(int)arg1;
-(void)refreshAssets;
-(void)setKeyAssetForKind:(id)arg1;
-(int)endTimeZoneOffset;
-(void)setKind:(unsigned short)arg1;
-(id<PLPhotosHighlightData>)parentPhotosHighlight;
-(void)setTitle:(id)arg1;
-(void)setStartDate:(id)arg1;
-(int)startTimeZoneOffset;
-(void)setEndDate:(id)arg1;
-(double)promotionScore;
-(unsigned short)enrichmentState;
-(void)setPromotionScore:(double)arg1;
-(void)setEnrichmentState:(unsigned short)arg1;
-(unsigned short)kind;
-(NSString *)title;
-(id<PLMomentAssetData>)keyAssetForKind;
-(void)setEndTimeZoneOffset:(int)arg1;
-(void)setParentPhotosHighlight:(id)arg1;
-(id<PLPhotosHighlightData>)parentDayGroupPhotosHighlight;
-(void)setParentDayGroupPhotosHighlight:(id)arg1;
-(NSSet *)childPhotosHighlights;
-(void)setChildPhotosHighlights:(id)arg1;
-(NSSet *)childDayGroupPhotosHighlights;
-(void)setChildDayGroupPhotosHighlights:(id)arg1;
-(id<PLMomentAssetData>)monthFirstAsset;
-(void)setMonthFirstAsset:(id)arg1;
-(NSSet *)summaryAssets;
-(void)setSummaryAssets:(id)arg1;
-(NSSet *)extendedAssets;
-(void)setExtendedAssets:(id)arg1;
-(NSSet *)dayGroupAssets;
-(void)setDayGroupAssets:(id)arg1;
-(NSSet *)dayGroupExtendedAssets;
-(void)setDayGroupExtendedAssets:(id)arg1;
-(NSSet *)dayGroupSummaryAssets;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)setDayGroupSummaryAssets:(id)arg1;

@end

