/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCContentContextInternal.h>
@class FCArticleRecordSource, FCTagRecordSource, FCTagListRecordSource, FCChannelMembershipController, FCResourceRecordSource, FCArticleListRecordSource, FCPurchaseLookupRecordSource, FCForYouConfigRecordSource, FCWidgetSectionConfigRecordSource, FCIssueRecordSource, FCIssueListRecordSource, FCAudioConfigRecordSource, NSArray, FCFeedDatabase, FCCKContentDatabase, FCAVAssetDownloadManager;


@protocol FCContentContextInternal <NSObject,FCCacheFlushing>
@property (nonatomic,readonly) FCArticleRecordSource * articleRecordSource; 
@property (nonatomic,readonly) FCTagRecordSource * tagRecordSource; 
@property (nonatomic,readonly) FCTagListRecordSource * tagListRecordSource; 
@property (nonatomic,readonly) FCChannelMembershipController * channelMembershipController; 
@property (nonatomic,readonly) FCResourceRecordSource * resourceRecordSource; 
@property (nonatomic,readonly) FCArticleListRecordSource * articleListRecordSource; 
@property (nonatomic,readonly) FCPurchaseLookupRecordSource * purchaseLookupRecordSource; 
@property (nonatomic,readonly) FCForYouConfigRecordSource * forYouConfigRecordSource; 
@property (nonatomic,readonly) FCWidgetSectionConfigRecordSource * widgetSectionConfigRecordSource; 
@property (nonatomic,readonly) FCIssueRecordSource * issueRecordSource; 
@property (nonatomic,readonly) FCIssueListRecordSource * issueListRecordSource; 
@property (nonatomic,readonly) FCAudioConfigRecordSource * audioConfigRecordSource; 
@property (nonatomic,readonly) NSArray * recordSources; 
@property (readonly) FCFeedDatabase * feedDatabase; 
@property (nonatomic,readonly) FCCKContentDatabase * contentDatabase; 
@property (nonatomic,readonly) id<FCAssetKeyCacheType> assetKeyCache; 
@property (nonatomic,readonly) id<FCAssetKeyManagerType> assetKeyManager; 
@property (nonatomic,readonly) id<FCAVAssetCacheType> avAssetCache; 
@property (nonatomic,readonly) id<FCAVAssetKeyCacheType> avAssetKeyCache; 
@property (nonatomic,readonly) id<FCAVAssetFactoryType> avAssetFactory; 
@property (nonatomic,readonly) FCAVAssetDownloadManager * avAssetDownloadManager; 
@required
-(id<FCAssetKeyCacheType>)assetKeyCache;
-(FCFeedDatabase *)feedDatabase;
-(id<FCAVAssetCacheType>)avAssetCache;
-(FCArticleRecordSource *)articleRecordSource;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(FCTagListRecordSource *)tagListRecordSource;
-(FCCKContentDatabase *)contentDatabase;
-(id<FCAVAssetKeyCacheType>)avAssetKeyCache;
-(FCAudioConfigRecordSource *)audioConfigRecordSource;
-(id<FCAVAssetFactoryType>)avAssetFactory;
-(NSArray *)recordSources;
-(FCChannelMembershipController *)channelMembershipController;
-(FCForYouConfigRecordSource *)forYouConfigRecordSource;
-(FCAVAssetDownloadManager *)avAssetDownloadManager;
-(FCIssueRecordSource *)issueRecordSource;
-(FCArticleListRecordSource *)articleListRecordSource;
-(id<FCAssetKeyManagerType>)assetKeyManager;
-(FCIssueListRecordSource *)issueListRecordSource;
-(FCResourceRecordSource *)resourceRecordSource;
-(FCTagRecordSource *)tagRecordSource;
-(FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;

@end


@protocol FCAssetKeyCacheType, FCAssetKeyManagerType, FCAVAssetFactoryType, FCAVAssetCacheType, FCAVAssetKeyCacheType;
@class FCArticleRecordSource, FCTagRecordSource, FCTagListRecordSource, FCChannelMembershipController, FCResourceRecordSource, FCArticleListRecordSource, FCPurchaseLookupRecordSource, FCForYouConfigRecordSource, FCWidgetSectionConfigRecordSource, FCIssueRecordSource, FCIssueListRecordSource, FCAudioConfigRecordSource, NSArray, FCFeedDatabase, FCCKContentDatabase, FCAVAssetDownloadManager, NSString;

@interface FCContentContextInternal : NSObject <FCContentContextInternal> {

	FCArticleRecordSource* _articleRecordSource;
	FCTagRecordSource* _tagRecordSource;
	FCTagListRecordSource* _tagListRecordSource;
	FCChannelMembershipController* _channelMembershipController;
	FCResourceRecordSource* _resourceRecordSource;
	FCArticleListRecordSource* _articleListRecordSource;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;
	FCForYouConfigRecordSource* _forYouConfigRecordSource;
	FCWidgetSectionConfigRecordSource* _widgetSectionConfigRecordSource;
	FCIssueRecordSource* _issueRecordSource;
	FCIssueListRecordSource* _issueListRecordSource;
	FCAudioConfigRecordSource* _audioConfigRecordSource;
	FCFeedDatabase* _feedDatabase;
	FCCKContentDatabase* _contentDatabase;
	id<FCAssetKeyCacheType> _assetKeyCache;
	id<FCAssetKeyManagerType> _assetKeyManager;
	id<FCAVAssetFactoryType> _avAssetFactory;
	id<FCAVAssetCacheType> _avAssetCache;
	id<FCAVAssetKeyCacheType> _avAssetKeyCache;
	FCAVAssetDownloadManager* _avAssetDownloadManager;

}

@property (nonatomic,retain) FCArticleRecordSource * articleRecordSource;                                      //@synthesize articleRecordSource=_articleRecordSource - In the implementation block
@property (nonatomic,retain) FCTagRecordSource * tagRecordSource;                                              //@synthesize tagRecordSource=_tagRecordSource - In the implementation block
@property (nonatomic,retain) FCTagListRecordSource * tagListRecordSource;                                      //@synthesize tagListRecordSource=_tagListRecordSource - In the implementation block
@property (nonatomic,retain) FCChannelMembershipController * channelMembershipController;                      //@synthesize channelMembershipController=_channelMembershipController - In the implementation block
@property (nonatomic,retain) FCResourceRecordSource * resourceRecordSource;                                    //@synthesize resourceRecordSource=_resourceRecordSource - In the implementation block
@property (nonatomic,retain) FCArticleListRecordSource * articleListRecordSource;                              //@synthesize articleListRecordSource=_articleListRecordSource - In the implementation block
@property (nonatomic,retain) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;                        //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
@property (nonatomic,retain) FCForYouConfigRecordSource * forYouConfigRecordSource;                            //@synthesize forYouConfigRecordSource=_forYouConfigRecordSource - In the implementation block
@property (nonatomic,retain) FCWidgetSectionConfigRecordSource * widgetSectionConfigRecordSource;              //@synthesize widgetSectionConfigRecordSource=_widgetSectionConfigRecordSource - In the implementation block
@property (nonatomic,retain) FCIssueRecordSource * issueRecordSource;                                          //@synthesize issueRecordSource=_issueRecordSource - In the implementation block
@property (nonatomic,retain) FCIssueListRecordSource * issueListRecordSource;                                  //@synthesize issueListRecordSource=_issueListRecordSource - In the implementation block
@property (nonatomic,retain) FCAudioConfigRecordSource * audioConfigRecordSource;                              //@synthesize audioConfigRecordSource=_audioConfigRecordSource - In the implementation block
@property (retain) FCFeedDatabase * feedDatabase;                                                              //@synthesize feedDatabase=_feedDatabase - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * contentDatabase;                                            //@synthesize contentDatabase=_contentDatabase - In the implementation block
@property (nonatomic,retain) id<FCAssetKeyCacheType> assetKeyCache;                                            //@synthesize assetKeyCache=_assetKeyCache - In the implementation block
@property (nonatomic,retain) id<FCAssetKeyManagerType> assetKeyManager;                                        //@synthesize assetKeyManager=_assetKeyManager - In the implementation block
@property (nonatomic,retain) id<FCAVAssetFactoryType> avAssetFactory;                                          //@synthesize avAssetFactory=_avAssetFactory - In the implementation block
@property (nonatomic,retain) id<FCAVAssetCacheType> avAssetCache;                                              //@synthesize avAssetCache=_avAssetCache - In the implementation block
@property (nonatomic,retain) id<FCAVAssetKeyCacheType> avAssetKeyCache;                                        //@synthesize avAssetKeyCache=_avAssetKeyCache - In the implementation block
@property (nonatomic,retain) FCAVAssetDownloadManager * avAssetDownloadManager;                                //@synthesize avAssetDownloadManager=_avAssetDownloadManager - In the implementation block
@property (nonatomic,readonly) NSArray * recordSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCAssetKeyCacheType>)assetKeyCache;
-(void)setFeedDatabase:(FCFeedDatabase *)arg1 ;
-(FCFeedDatabase *)feedDatabase;
-(id<FCAVAssetCacheType>)avAssetCache;
-(FCArticleRecordSource *)articleRecordSource;
-(id)init;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(void)setAudioConfigRecordSource:(FCAudioConfigRecordSource *)arg1 ;
-(void)setAvAssetFactory:(id<FCAVAssetFactoryType>)arg1 ;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(void)setTagRecordSource:(FCTagRecordSource *)arg1 ;
-(FCTagListRecordSource *)tagListRecordSource;
-(void)setAssetKeyManager:(id<FCAssetKeyManagerType>)arg1 ;
-(void)setAvAssetDownloadManager:(FCAVAssetDownloadManager *)arg1 ;
-(FCCKContentDatabase *)contentDatabase;
-(id<FCAVAssetKeyCacheType>)avAssetKeyCache;
-(void)setContentDatabase:(FCCKContentDatabase *)arg1 ;
-(void)setForYouConfigRecordSource:(FCForYouConfigRecordSource *)arg1 ;
-(FCAudioConfigRecordSource *)audioConfigRecordSource;
-(void)setTagListRecordSource:(FCTagListRecordSource *)arg1 ;
-(id<FCAVAssetFactoryType>)avAssetFactory;
-(NSArray *)recordSources;
-(FCChannelMembershipController *)channelMembershipController;
-(void)setAvAssetKeyCache:(id<FCAVAssetKeyCacheType>)arg1 ;
-(void)setAvAssetCache:(id<FCAVAssetCacheType>)arg1 ;
-(FCForYouConfigRecordSource *)forYouConfigRecordSource;
-(void)setChannelMembershipController:(FCChannelMembershipController *)arg1 ;
-(void)setPurchaseLookupRecordSource:(FCPurchaseLookupRecordSource *)arg1 ;
-(FCAVAssetDownloadManager *)avAssetDownloadManager;
-(FCIssueRecordSource *)issueRecordSource;
-(void)setIssueRecordSource:(FCIssueRecordSource *)arg1 ;
-(void)setIssueListRecordSource:(FCIssueListRecordSource *)arg1 ;
-(FCArticleListRecordSource *)articleListRecordSource;
-(id<FCAssetKeyManagerType>)assetKeyManager;
-(void)setWidgetSectionConfigRecordSource:(FCWidgetSectionConfigRecordSource *)arg1 ;
-(FCIssueListRecordSource *)issueListRecordSource;
-(void)setArticleRecordSource:(FCArticleRecordSource *)arg1 ;
-(FCResourceRecordSource *)resourceRecordSource;
-(void)setResourceRecordSource:(FCResourceRecordSource *)arg1 ;
-(void)setAssetKeyCache:(id<FCAssetKeyCacheType>)arg1 ;
-(FCTagRecordSource *)tagRecordSource;
-(void)setArticleListRecordSource:(FCArticleListRecordSource *)arg1 ;
-(FCWidgetSectionConfigRecordSource *)widgetSectionConfigRecordSource;
@end

