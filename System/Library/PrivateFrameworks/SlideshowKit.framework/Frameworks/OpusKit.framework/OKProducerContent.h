/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle {

	OKProducerPlugin* _plugin;

}

@property (assign,nonatomic) OKProducerPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
-(OKProducerPlugin *)plugin;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLoaded;
-(void)setPlugin:(OKProducerPlugin *)arg1 ;
@end

