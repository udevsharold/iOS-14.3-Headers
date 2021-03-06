/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BBContent : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _message;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * message;               //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contentWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3 ;
-(NSString *)subtitle;
-(NSString *)message;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToContent:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
@end

