/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXViewportChangeListener.h>

@protocol SXMediaPlaybackDelegate;
@class SXViewport, NSString;

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener> {

	id<SXMediaPlaybackDelegate> _mediaPlaybackDelegate;
	SXViewport* _viewport;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
@end

