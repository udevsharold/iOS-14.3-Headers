/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKDiffHunk : NSObject <NSSecureCoding> {

	NSString* _key;
	id _oldValue;
	id _newValue;
	NSString* _message;

}

@property (nonatomic,retain) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id valueOld;                     //@synthesize oldValue=_oldValue - In the implementation block
@property (nonatomic,retain) id valueNew;                     //@synthesize newValue=_newValue - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4 ;
-(NSString *)key;
-(long long)compare:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)message;
-(id)valueOld;
-(void)setMessage:(NSString *)arg1 ;
-(id)valueNew;
-(void)setValueOld:(id)arg1 ;
-(void)setValueNew:(id)arg1 ;
-(BOOL)isEqualToDiffHunk:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

