/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, UIImage, NSDate;

@interface CLWebItem : NSObject <NSCopying, NSCoding> {

	NSString* _name;
	long long _type;
	NSURL* _contentURL;
	NSString* _mimeType;
	long long _viewCount;
	NSURL* _remoteURL;
	NSURL* _href;
	NSURL* _URL;
	NSURL* _iconURL;
	UIImage* _icon;
	BOOL _trashed;
	BOOL _private;
	NSDate* _createdAt;
	NSDate* _updatedAt;
	NSDate* _deletedAt;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * contentURL;                         //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                          //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) long long viewCount;                        //@synthesize viewCount=_viewCount - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                          //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSURL * href;                               //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                            //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) UIImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isTrashed,nonatomic) BOOL trashed;              //@synthesize trashed=_trashed - In the implementation block
@property (assign,getter=isPrivate,nonatomic) BOOL private;              //@synthesize private=_private - In the implementation block
@property (nonatomic,retain) NSDate * createdAt;                         //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,retain) NSDate * updatedAt;                         //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,retain) NSDate * deletedAt;                         //@synthesize deletedAt=_deletedAt - In the implementation block
+(id)webItem;
+(id)webItemWithName:(id)arg1 ;
+(id)webItemWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3 ;
-(NSURL *)href;
-(BOOL)isPrivate;
-(NSDate *)createdAt;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)contentURL;
-(void)setHref:(NSURL *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)dealloc;
-(UIImage *)icon;
-(void)setPrivate:(BOOL)arg1 ;
-(void)setTrashed:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(id)description;
-(void)setViewCount:(long long)arg1 ;
-(long long)type;
-(void)setUpdatedAt:(NSDate *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(BOOL)isTrashed;
-(NSDate *)updatedAt;
-(NSString *)name;
-(NSString *)mimeType;
-(void)setIconURL:(NSURL *)arg1 ;
-(long long)viewCount;
-(NSURL *)URL;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)remoteURL;
-(id)initWithName:(id)arg1 ;
-(NSURL *)iconURL;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3 ;
-(NSDate *)deletedAt;
-(void)setDeletedAt:(NSDate *)arg1 ;
@end

