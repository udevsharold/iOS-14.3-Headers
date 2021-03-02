/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurantGuest, INRestaurantGuestDisplayPreferences;


@protocol INGetRestaurantGuestIntentResponseExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) INRestaurantGuestDisplayPreferences * guestDisplayPreferences; 
@property (nonatomic,readonly) long long code; 
@required
-(long long)code;
-(INRestaurantGuest *)guest;
-(id)init;
-(void)setGuest:(id)arg1;
-(INRestaurantGuestDisplayPreferences *)guestDisplayPreferences;
-(void)setGuestDisplayPreferences:(id)arg1;

@end
