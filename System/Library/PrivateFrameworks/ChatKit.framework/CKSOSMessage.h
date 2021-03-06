/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString, NSArray;

@interface CKSOSMessage : NSObject <NSCopying> {

	BOOL _useStandalone;
	CLLocation* _location;
	NSString* _locationURL;
	NSArray* _recipients;
	/*^block*/id _failureBlock;
	NSArray* _handles;
	NSString* _message;
	NSString* _smsMessage;
	NSString* _mmsMessage;

}

@property (getter=handles,nonatomic,copy) NSArray * handles;              //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * smsMessage;                         //@synthesize smsMessage=_smsMessage - In the implementation block
@property (nonatomic,copy) NSString * mmsMessage;                         //@synthesize mmsMessage=_mmsMessage - In the implementation block
@property (nonatomic,copy) CLLocation * location;                         //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * locationURL;                        //@synthesize locationURL=_locationURL - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                          //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) id failureBlock;                               //@synthesize failureBlock=_failureBlock - In the implementation block
@property (assign,nonatomic) BOOL useStandalone;                          //@synthesize useStandalone=_useStandalone - In the implementation block
-(NSArray *)handles;
-(void)setHandles:(NSArray *)arg1 ;
-(NSString *)message;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)recipients;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)locationURL;
-(void)setFailureBlock:(id)arg1 ;
-(void)setLocationURL:(NSString *)arg1 ;
-(CLLocation *)location;
-(id)description;
-(id)failureBlock;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setSmsMessage:(NSString *)arg1 ;
-(NSString *)smsMessage;
-(void)setMmsMessage:(NSString *)arg1 ;
-(void)setUseStandalone:(BOOL)arg1 ;
-(id)initWithMessage:(id)arg1 recipients:(id)arg2 ;
-(BOOL)useStandalone;
-(id)initWithSMSMessage:(id)arg1 mmsMessage:(id)arg2 recipients:(id)arg3 ;
-(NSString *)mmsMessage;
@end

