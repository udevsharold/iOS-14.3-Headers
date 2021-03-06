/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAsyncOperation.h>

@class TPSWidgetController, TPSTip, NSURL;

@interface TPSWidgetAssetFetchOperation : TPSAsyncOperation {

	TPSWidgetController* _widgetController;
	TPSTip* _widgetTip;
	NSURL* _lightAssetURL;
	NSURL* _darkAssetURL;

}

@property (nonatomic,retain) NSURL * lightAssetURL;                                        //@synthesize lightAssetURL=_lightAssetURL - In the implementation block
@property (nonatomic,retain) NSURL * darkAssetURL;                                         //@synthesize darkAssetURL=_darkAssetURL - In the implementation block
@property (nonatomic,__weak,readonly) TPSWidgetController * widgetController;              //@synthesize widgetController=_widgetController - In the implementation block
@property (nonatomic,readonly) TPSTip * widgetTip;                                         //@synthesize widgetTip=_widgetTip - In the implementation block
-(void)main;
-(TPSWidgetController *)widgetController;
-(TPSTip *)widgetTip;
-(void)setLightAssetURL:(NSURL *)arg1 ;
-(void)setDarkAssetURL:(NSURL *)arg1 ;
-(NSURL *)lightAssetURL;
-(NSURL *)darkAssetURL;
-(id)initWithTip:(id)arg1 widgetController:(id)arg2 ;
@end

