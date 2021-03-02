/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BCSCallToActionItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isDefault;
	NSString* _language;
	NSString* _subtitle;
	NSString* _title;
	NSString* _body;

}

@property (nonatomic,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * body;                  //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                   //@synthesize isDefault=_isDefault - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)body;
-(NSString *)subtitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(id)description;
-(BOOL)isDefault;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCallToAction:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 language:(id)arg3 body:(id)arg4 isDefault:(BOOL)arg5 ;
@end
