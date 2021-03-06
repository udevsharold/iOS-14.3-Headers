/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSCKNotificationInfo : NSObject {

	BOOL _shouldSendContentAvailable;
	NSString* _alertLocalizationKey;

}

@property (nonatomic,copy) NSString * alertLocalizationKey;                //@synthesize alertLocalizationKey=_alertLocalizationKey - In the implementation block
@property (assign,nonatomic) BOOL shouldSendContentAvailable;              //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
+(id)alloc;
+(Class)__class;
-(NSString *)alertLocalizationKey;
-(void)setAlertLocalizationKey:(NSString *)arg1 ;
-(void)setShouldSendContentAvailable:(BOOL)arg1 ;
-(BOOL)shouldSendContentAvailable;
@end

