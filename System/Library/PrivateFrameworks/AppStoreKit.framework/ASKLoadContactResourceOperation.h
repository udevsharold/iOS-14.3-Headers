/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@class NSString, CNAvatarImageRenderer;

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation {

	NSString* _contactId;
	CNAvatarImageRenderer* _monogrammer;

}

@property (nonatomic,retain) CNAvatarImageRenderer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactId;                      //@synthesize contactId=_contactId - In the implementation block
+(double)mainScreenScale;
-(void)main;
-(id)makeFetchError;
-(id)initWithContactId:(id)arg1 ;
-(CNAvatarImageRenderer *)monogrammer;
-(void)setMonogrammer:(CNAvatarImageRenderer *)arg1 ;
-(NSString *)contactId;
@end

