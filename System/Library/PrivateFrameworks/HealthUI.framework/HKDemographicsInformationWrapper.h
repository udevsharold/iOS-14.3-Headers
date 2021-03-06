/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDateComponents, HKBiologicalSexObject, HKQuantity, HKFitzpatrickSkinTypeObject, HKBloodTypeObject, HKWheelchairUseObject, HKCardioFitnessMedicationsUseObject, NSArray;

@interface HKDemographicsInformationWrapper : NSObject {

	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSDateComponents* _dateOfBirthComponents;
	HKBiologicalSexObject* _biologicalSexObject;
	HKQuantity* _heightQuantity;
	HKQuantity* _weightQuantity;
	HKFitzpatrickSkinTypeObject* _fitzpatrickSkinTypeObject;
	HKBloodTypeObject* _bloodTypeObject;
	HKWheelchairUseObject* _wheelchairUseObject;
	HKCardioFitnessMedicationsUseObject* _cardioFitnessMedicationsUseObject;
	NSArray* _postalAddresses;
	NSArray* _emailAddresses;

}

@property (nonatomic,copy) NSString * firstName;                                                                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * middleName;                                                                //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                                                                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSDateComponents * dateOfBirthComponents;                                             //@synthesize dateOfBirthComponents=_dateOfBirthComponents - In the implementation block
@property (nonatomic,copy) HKBiologicalSexObject * biologicalSexObject;                                          //@synthesize biologicalSexObject=_biologicalSexObject - In the implementation block
@property (nonatomic,copy) HKQuantity * heightQuantity;                                                          //@synthesize heightQuantity=_heightQuantity - In the implementation block
@property (nonatomic,copy) HKQuantity * weightQuantity;                                                          //@synthesize weightQuantity=_weightQuantity - In the implementation block
@property (nonatomic,copy) HKFitzpatrickSkinTypeObject * fitzpatrickSkinTypeObject;                              //@synthesize fitzpatrickSkinTypeObject=_fitzpatrickSkinTypeObject - In the implementation block
@property (nonatomic,copy) HKBloodTypeObject * bloodTypeObject;                                                  //@synthesize bloodTypeObject=_bloodTypeObject - In the implementation block
@property (nonatomic,copy) HKWheelchairUseObject * wheelchairUseObject;                                          //@synthesize wheelchairUseObject=_wheelchairUseObject - In the implementation block
@property (nonatomic,copy) HKCardioFitnessMedicationsUseObject * cardioFitnessMedicationsUseObject;              //@synthesize cardioFitnessMedicationsUseObject=_cardioFitnessMedicationsUseObject - In the implementation block
@property (nonatomic,copy) NSArray * postalAddresses;                                                            //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,copy) NSArray * emailAddresses;                                                             //@synthesize emailAddresses=_emailAddresses - In the implementation block
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSArray *)postalAddresses;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)middleName;
-(NSArray *)emailAddresses;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)lastName;
-(NSString *)firstName;
-(NSDateComponents *)dateOfBirthComponents;
-(void)setDateOfBirthComponents:(NSDateComponents *)arg1 ;
-(HKBloodTypeObject *)bloodTypeObject;
-(HKQuantity *)heightQuantity;
-(HKQuantity *)weightQuantity;
-(HKBiologicalSexObject *)biologicalSexObject;
-(void)setBiologicalSexObject:(HKBiologicalSexObject *)arg1 ;
-(void)setHeightQuantity:(HKQuantity *)arg1 ;
-(void)setWeightQuantity:(HKQuantity *)arg1 ;
-(HKFitzpatrickSkinTypeObject *)fitzpatrickSkinTypeObject;
-(void)setFitzpatrickSkinTypeObject:(HKFitzpatrickSkinTypeObject *)arg1 ;
-(void)setBloodTypeObject:(HKBloodTypeObject *)arg1 ;
-(HKWheelchairUseObject *)wheelchairUseObject;
-(void)setWheelchairUseObject:(HKWheelchairUseObject *)arg1 ;
-(HKCardioFitnessMedicationsUseObject *)cardioFitnessMedicationsUseObject;
-(void)setCardioFitnessMedicationsUseObject:(HKCardioFitnessMedicationsUseObject *)arg1 ;
@end

