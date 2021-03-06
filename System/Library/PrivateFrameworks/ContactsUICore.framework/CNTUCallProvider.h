/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNTUCallProvider.h>
@class NSString, NSSet;


@protocol CNTUCallProvider <NSObject>
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
@required
-(NSSet *)supportedHandleTypes;
-(BOOL)supportsAudio;
-(NSString *)localizedName;
-(NSString *)bundleIdentifier;
-(BOOL)supportsVideo;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3;

@end


@class NSString, NSSet, TUCallProvider;

@interface CNTUCallProvider : NSObject <CNTUCallProvider> {

	TUCallProvider* _callProvider;

}

@property (nonatomic,copy) TUCallProvider * callProvider;                      //@synthesize callProvider=_callProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL supportsAudio; 
@property (nonatomic,readonly) BOOL supportsVideo; 
@property (nonatomic,copy,readonly) NSSet * supportedHandleTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)supportedHandleTypes;
-(BOOL)supportsAudio;
-(NSString *)localizedName;
-(NSString *)bundleIdentifier;
-(BOOL)supportsVideo;
-(TUCallProvider *)callProvider;
-(void)setCallProvider:(TUCallProvider *)arg1 ;
-(id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3 ;
-(id)initWithCallProvider:(id)arg1 ;
@end

