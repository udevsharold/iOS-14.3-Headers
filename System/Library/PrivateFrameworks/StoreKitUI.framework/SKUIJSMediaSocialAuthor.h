/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIJSMediaSocialAuthor.h>
@class NSString, NSArray, NSDictionary;


@protocol SKUIJSMediaSocialAuthor <JSExport>
@property (nonatomic,readonly) NSString * dsId; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) NSString * entityType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * permissions; 
@property (nonatomic,readonly) NSDictionary * storePlatformData; 
@required
-(NSString *)dsId;
-(NSString *)entityType;
-(NSString *)entityIdentifier;
-(NSArray *)permissions;
-(NSString *)name;
-(NSDictionary *)storePlatformData;

@end


@class NSString, NSArray, NSDictionary, SKUIMediaSocialAuthor;

@interface SKUIJSMediaSocialAuthor : NSObject <SKUIJSMediaSocialAuthor> {

	SKUIMediaSocialAuthor* _mediaSocialAuthor;

}

@property (nonatomic,readonly) NSString * dsId; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) NSString * entityType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * permissions; 
@property (nonatomic,readonly) NSDictionary * storePlatformData; 
-(NSString *)dsId;
-(NSString *)entityType;
-(NSString *)entityIdentifier;
-(NSArray *)permissions;
-(NSString *)name;
-(id)initWithSKUIMediaSocialAuthor:(id)arg1 ;
-(NSDictionary *)storePlatformData;
@end
