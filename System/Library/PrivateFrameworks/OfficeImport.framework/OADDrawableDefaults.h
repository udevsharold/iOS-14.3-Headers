/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADDrawableCategoryDefaults;

@interface OADDrawableDefaults : NSObject {

	OADDrawableCategoryDefaults* mShapeDefaults;
	OADDrawableCategoryDefaults* mLineDefaults;
	OADDrawableCategoryDefaults* mTextDefaults;

}

@property (nonatomic,retain) OADDrawableCategoryDefaults * shapeDefaults; 
@property (nonatomic,retain) OADDrawableCategoryDefaults * lineDefaults; 
@property (nonatomic,retain) OADDrawableCategoryDefaults * textDefaults; 
-(BOOL)isEmpty;
-(id)description;
-(id)addShapeDefaults;
-(id)addLineDefaults;
-(id)addTextDefaults;
-(OADDrawableCategoryDefaults *)lineDefaults;
-(OADDrawableCategoryDefaults *)shapeDefaults;
-(OADDrawableCategoryDefaults *)textDefaults;
-(void)addDefaults;
-(void)setShapeDefaults:(OADDrawableCategoryDefaults *)arg1 ;
-(void)setLineDefaults:(OADDrawableCategoryDefaults *)arg1 ;
-(void)setTextDefaults:(OADDrawableCategoryDefaults *)arg1 ;
@end
