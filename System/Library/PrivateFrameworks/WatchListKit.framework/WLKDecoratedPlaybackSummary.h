/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WLKPlaybackSummary, NSString;

@interface WLKDecoratedPlaybackSummary : NSObject <NSSecureCoding> {

	WLKPlaybackSummary* _summary;
	NSString* _canonicalID;

}

@property (nonatomic,readonly) WLKPlaybackSummary * summary;              //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;               //@synthesize canonicalID=_canonicalID - In the implementation block
+(BOOL)supportsSecureCoding;
-(WLKPlaybackSummary *)summary;
-(NSString *)canonicalID;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSummary:(id)arg1 canonicalID:(id)arg2 ;
@end
