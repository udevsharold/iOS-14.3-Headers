/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSAuthenticationToken.h>

@class NSString, NSDate, NSData;

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken> {

	NSString* _body;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSDate * expirationDate;                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * body;                               //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSData * serializedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)serializedData;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isOpaque;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)initWithSerializedData:(id)arg1 ;
-(BOOL)isFromUnsupportedProvider;
@end
