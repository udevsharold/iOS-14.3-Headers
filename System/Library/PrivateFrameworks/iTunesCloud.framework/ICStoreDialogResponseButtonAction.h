/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface ICStoreDialogResponseButtonAction : NSObject <NSCopying> {

	NSDictionary* _actionDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * actionDictionary;              //@synthesize actionDictionary=_actionDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * buyParams; 
@property (nonatomic,copy,readonly) NSString * itemName; 
@property (nonatomic,copy,readonly) NSString * subtarget; 
@property (nonatomic,copy,readonly) NSString * URLString; 
-(NSString *)itemName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)buyParams;
-(NSString *)URLString;
-(long long)type;
-(NSString *)subtarget;
-(id)initWithResponseButtonActionDictionary:(id)arg1 ;
-(NSDictionary *)actionDictionary;
-(NSString *)kind;
@end
