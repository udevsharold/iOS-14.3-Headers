/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying> {

	/*^block*/id _itemLookupBlock;
	NSString* _platformName;
	NSString* _systemVersion;

}

@property (nonatomic,copy) id itemLookupBlock;                    //@synthesize itemLookupBlock=_itemLookupBlock - In the implementation block
@property (nonatomic,copy) NSString * platformName;               //@synthesize platformName=_platformName - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
-(NSString *)systemVersion;
-(NSString *)platformName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setSystemVersion:(NSString *)arg1 ;
-(id)itemLookupBlock;
-(void)setItemLookupBlock:(id)arg1 ;
-(void)setPlatformName:(NSString *)arg1 ;
@end
