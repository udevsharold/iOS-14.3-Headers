/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary, NSNumber;

@interface UNSAttachmentRecord : NSObject {

	BOOL _thumbnailHidden;
	BOOL _hiddenFromDefaultExpandedView;
	NSString* _identifier;
	NSURL* _URL;
	NSString* _type;
	NSDictionary* _thumbnailClippingRect;
	NSNumber* _thumbnailFrameNumber;
	NSDictionary* _thumbnailTimestamp;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL thumbnailHidden;                            //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (nonatomic,copy) NSDictionary * thumbnailClippingRect;              //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
@property (nonatomic,copy) NSNumber * thumbnailFrameNumber;                   //@synthesize thumbnailFrameNumber=_thumbnailFrameNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * thumbnailTimestamp;                 //@synthesize thumbnailTimestamp=_thumbnailTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromDefaultExpandedView;              //@synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView - In the implementation block
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)thumbnailHidden;
-(BOOL)hiddenFromDefaultExpandedView;
-(void)setThumbnailHidden:(BOOL)arg1 ;
-(void)setHiddenFromDefaultExpandedView:(BOOL)arg1 ;
-(NSString *)identifier;
-(id)description;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSURL *)URL;
-(NSDictionary *)thumbnailClippingRect;
-(NSDictionary *)thumbnailTimestamp;
-(NSNumber *)thumbnailFrameNumber;
-(void)setThumbnailClippingRect:(NSDictionary *)arg1 ;
-(void)setThumbnailFrameNumber:(NSNumber *)arg1 ;
-(void)setThumbnailTimestamp:(NSDictionary *)arg1 ;
@end
