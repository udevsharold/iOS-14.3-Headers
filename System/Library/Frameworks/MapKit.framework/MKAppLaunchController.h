/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface MKAppLaunchController : NSObject {

	NSString* _webURLString;
	NSURL* webURL;

}

@property (nonatomic,retain) NSURL * webURL; 
+(void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)sharedController;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
