/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKProcessPool, NSCache;

@interface MKWebViewFactory : NSObject {

	WKProcessPool* _processPool;
	NSCache* _webViewCache;

}
+(id)sharedWebViewFactory;
-(id)init;
-(void)requeueItem:(id)arg1 ;
-(id)dequeueItemWithBridgeConfiguration:(id)arg1 ;
@end

