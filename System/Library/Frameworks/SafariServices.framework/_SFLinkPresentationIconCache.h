/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol WBSSiteMetadataProviderDelegate;
@class WBSSiteMetadataImageCache, NSString;

@interface _SFLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider> {

	WBSSiteMetadataImageCache* _imageCache;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;

}

@property (__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForHost:(id)arg1 ;
-(void)purgeUnneededCacheEntries;
-(void)savePendingChangesBeforeTermination;
-(void)dealloc;
-(void)emptyCaches;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)saveImage:(id)arg1 forHost:(id)arg2 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(id)initWithImageDirectoryURL:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
@end
