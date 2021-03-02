/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebItemProviderRegistrar.h>

@class NSString, NSData;

@interface WebItemProviderWritableObjectRegistrar : NSObject <WebItemProviderRegistrar> {

	RetainPtr<id<NSItemProviderWriting> >* _representingObject;

}

@property (nonatomic,readonly) id<NSItemProviderWriting> representingObject; 
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObject:(id)arg1 ;
-(void)registerItemProvider:(id)arg1 ;
-(id<NSItemProviderWriting>)representingObject;
-(NSString *)description;
-(id<NSItemProviderWriting>)representingObjectForClient;
@end
