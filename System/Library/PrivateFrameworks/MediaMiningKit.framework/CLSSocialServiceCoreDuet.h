/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSSocialService.h>

@class CLSSocialServiceContacts;

@interface CLSSocialServiceCoreDuet : CLSSocialService {

	CLSSocialServiceContacts* _contactSocialService;

}

@property (retain) CLSSocialServiceContacts * contactSocialService;              //@synthesize contactSocialService=_contactSocialService - In the implementation block
-(id)coreDuetPersonSuggestionsOnDate:(id)arg1 ;
-(id)init;
-(CLSSocialServiceContacts *)contactSocialService;
-(void)setContactSocialService:(CLSSocialServiceContacts *)arg1 ;
@end

