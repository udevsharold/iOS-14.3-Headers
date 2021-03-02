/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIImageLoader.h>

@class NSItemProvider, NSString, NSProgress;

@interface _UINSItemProviderImageLoader : _UIImageLoader {

	NSItemProvider* _itemProvider;
	NSString* _typeIdentifier;
	NSProgress* __progress;

}

@property (setter=_setProgress:,retain) NSProgress * _progress;              //@synthesize _progress=__progress - In the implementation block
-(NSProgress *)_progress;
-(void)_setProgress:(id)arg1 ;
-(BOOL)_really_cancel;
-(void)_really_loadImage:(/*^block*/id)arg1 ;
-(id)initWithItemProvider:(id)arg1 typeIdentifier:(id)arg2 ;
@end
