/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSData;

@interface ICAuthorizeMachineResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * keybagData; 
@property (nonatomic,copy,readonly) NSData * tokenData; 
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSData *)keybagData;
-(NSData *)tokenData;
@end

