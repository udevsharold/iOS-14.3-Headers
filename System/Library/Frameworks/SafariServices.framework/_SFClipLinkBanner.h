/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFLinkBanner.h>
#import <libobjc.A.dylib/_SFAppSuggestionBanner.h>

@protocol _SFAppSuggestionBannerDelegate;
@class _SFClipLink, NSString;

@interface _SFClipLinkBanner : _SFLinkBanner <_SFAppSuggestionBanner> {

	id<_SFAppSuggestionBannerDelegate> delegate;
	_SFClipLink* _clipLink;

}

@property (nonatomic,readonly) _SFClipLink * clipLink;                                        //@synthesize clipLink=_clipLink - In the implementation block
@property (assign,nonatomic,__weak) id<_SFAppSuggestionBannerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getClipLinkBannerForClipLink:(id)arg1 openActionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<_SFAppSuggestionBannerDelegate>)arg1 ;
-(id)_initWithClipLink:(id)arg1 openActionHandler:(/*^block*/id)arg2 ;
-(_SFClipLink *)clipLink;
-(id<_SFAppSuggestionBannerDelegate>)delegate;
@end
