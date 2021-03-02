/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MRContentItem, MRPlaybackQueueRequest;

@interface MRContentItemRequest : NSObject <NSSecureCoding> {

	MRContentItem* _item;
	MRPlaybackQueueRequest* _request;

}

@property (nonatomic,retain) MRContentItem * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) MRPlaybackQueueRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(MRContentItem *)item;
-(void)setItem:(MRContentItem *)arg1 ;
-(MRPlaybackQueueRequest *)request;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(MRPlaybackQueueRequest *)arg1 ;
-(id)description;
-(id)initWithItem:(id)arg1 request:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
