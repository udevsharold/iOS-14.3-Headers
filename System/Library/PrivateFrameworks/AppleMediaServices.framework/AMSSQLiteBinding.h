/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSSQLiteBinding <NSObject>
@required
-(void)bindFloat:(float)arg1 atPosition:(int)arg2;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
-(void)bindURL:(id)arg1 atPosition:(int)arg2;
-(void)bindDictionary:(id)arg1 atPosition:(int)arg2;
-(void)bindString:(id)arg1 atPosition:(int)arg2;
-(void)bindNullableString:(id)arg1 atPosition:(int)arg2;
-(void)bindData:(id)arg1 atPosition:(int)arg2;
-(int)clearBindings;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2;
-(void)bindArray:(id)arg1 atPosition:(int)arg2;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2;
-(void)bindDate:(id)arg1 atPosition:(int)arg2;
-(void)bindInt:(int)arg1 atPosition:(int)arg2;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2;
-(void)bindNullAtPosition:(int)arg1;

@end
