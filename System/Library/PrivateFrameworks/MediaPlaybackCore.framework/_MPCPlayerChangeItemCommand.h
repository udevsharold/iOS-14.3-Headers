/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerChangeItemCommand.h>

@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand> {

	unsigned long long _changeItemSupport;

}

@property (nonatomic,readonly) unsigned long long changeItemSupport;              //@synthesize changeItemSupport=_changeItemSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nextChapter;
-(id)changeToSection:(id)arg1 ;
-(id)previousItem;
-(id)previousItemDeferringToPlaybackQueuePosition;
-(id)nextItem;
-(id)changeToItem:(id)arg1 ;
-(id)previousSection;
-(id)nextSection;
-(unsigned long long)changeItemSupport;
-(id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2 ;
-(id)previousChapter;
@end
