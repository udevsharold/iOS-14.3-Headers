/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSString;

@interface TSWPStorageItemProvider : NSObject <NSItemProviderWriting> {

	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                                                      //@synthesize string=_string - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writableTypeIdentifiersForItemProvider;
+(id)storageItemProviderWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)string;
-(void)dealloc;
-(void)_loadPlainTextData:(/*^block*/id)arg1 ;
@end
