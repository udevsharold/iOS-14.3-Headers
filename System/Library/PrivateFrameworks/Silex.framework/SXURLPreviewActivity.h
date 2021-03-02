/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionPreviewActivity.h>

@protocol SXURLPreviewing;
@class NSURL, NSString;

@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity> {

	id<SXURLPreviewing> _URLPreviewing;
	NSURL* _URL;

}

@property (nonatomic,readonly) id<SXURLPreviewing> URLPreviewing;              //@synthesize URLPreviewing=_URLPreviewing - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXURLPreviewing>)URLPreviewing;
-(id)previewViewControllerForAction:(id)arg1 ;
-(NSURL *)URL;
-(void)commitViewController:(id)arg1 action:(id)arg2 ;
-(id)initWithURLPreviewing:(id)arg1 URL:(id)arg2 ;
@end
