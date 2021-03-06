/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying> {

	BOOL _animated;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL animated;                        //@synthesize animated=_animated - In the implementation block
+(id)utsk;
+(id)entitlements;
+(id)accountChanged;
+(id)purchases;
+(id)upNext;
+(id)favorites;
+(id)preferredVideoFormat;
+(id)restrictions;
+(id)settings;
+(id)postPlay;
+(id)playActivity;
+(id)removeFromPlayHistory;
+(id)appDidBecomeActive;
+(id)playHistoryUpdated;
+(id)clearPlayHistory;
+(id)appRefresh;
+(id)locationAuthorizationChanged;
+(id)locationRetrieved;
+(id)iamMessageReceived;
-(BOOL)animated;
-(id)initWithEventType:(unsigned long long)arg1 ;
-(id)init;
-(void)setAnimated:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
@end

