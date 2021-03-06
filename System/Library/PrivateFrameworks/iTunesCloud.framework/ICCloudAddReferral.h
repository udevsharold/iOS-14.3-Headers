/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICCloudAddReferral : NSObject <NSSecureCoding> {

	NSString* _playlistGlobalID;
	long long _albumAdamID;

}

@property (nonatomic,copy,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long albumAdamID;                         //@synthesize albumAdamID=_albumAdamID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referralWithAlbumAdamID:(long long)arg1 ;
+(id)referralWithPlaylistGlobalID:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)albumAdamID;
-(NSString *)playlistGlobalID;
-(void)encodeWithCoder:(id)arg1 ;
@end

